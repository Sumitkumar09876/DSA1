
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <assert.h> 
 
void convertToIpv6(char* ipv4address) { 
    char *octets[4]; 
    char *token; 
    int i = 0; 
 
     
    token = strtok(ipv4address, "."); 
    while (token != NULL && i < 4) { 
        octets[i++] = token; 
        token = strtok(NULL, "."); 
    } 
 
     
    if (i != 4) { 
        printf("Invalid input\n"); 
        return; 
    } 
 
     
    if (strcmp(octets[0], "127") == 0) { 
        printf("::1\n"); 
        return; 
    } 
 
    char ipv6[40] = "::FFFF:";   
 
     
    for (i = 0; i < 4; i++) { 
        int octet = atoi(octets[i]); 
        if (octet < 0 || octet > 255) { 
            printf("Invalid input\n"); 
            return; 
        } 
 
        char hex[3]; 
        snprintf(hex, sizeof(hex), "%02X", octet); 
        strcat(ipv6, hex); 
 
        if (i == 1) {   
            strcat(ipv6, ":"); 
        } 
    } 
 
    printf("%s\n", ipv6); 
}

int main() {
    char ipv4address[] = "192.168.0.1";
    convertToIpv6(ipv4address);
    return 0;
}