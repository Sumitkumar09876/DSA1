def main():
    inputs = input().split()
    currentPopulation = int(inputs[0])
    birthRate = float(inputs[1])
    deathRate = float(inputs[2])
    days = int(inputs[3])

    # Iterate for the given number of days to calculate the population change
    for _ in range(days):
        # Calculate the number of births in a day
        birth_increase = currentPopulation * birthRate
        # Calculate the number of deaths in a day
        death_decrease = currentPopulation * deathRate
        # Update the current population by adding births and subtracting deaths
        currentPopulation = currentPopulation + birth_increase - death_decrease

    # Round the final population to the nearest integer as per problem description
    print(round(currentPopulation))

if __name__ == "__main__":
    main()