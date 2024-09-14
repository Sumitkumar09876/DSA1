def main():
    # Input for route A
    m = int(input("Enter number of stops for Route A: "))
    routeA = []
    print("Enter stops for Route A:")
    for _ in range(m):
        routeA.append(int(input()))

    # Input for route B
    n = int(input("Enter number of stops for Route B: "))
    routeB = []
    print("Enter stops for Route B:")
    for _ in range(n):
        routeB.append(int(input()))

    # Read the specific stops to check
    x = int(input("Enter stop x: "))
    y = int(input("Enter stop y: "))

    # Create sets for quick lookup
    stopsA = set(routeA)
    stopsB = set(routeB)

    # Check if both stops are in their respective routes
    if x in stopsA and y in stopsA:
        print("No")
        return
    if x in stopsB and y in stopsB:
        print("No")
        return

    canTravel = False

    # Check if travel is possible
    if (x in stopsA and y in stopsB) or (x in stopsB and y in stopsA):
        canTravel = True

    # Output the result
    if canTravel:
        print("Yes")
    else:
        print("No")

if __name__ == "__main__":
    main()