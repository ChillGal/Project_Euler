def multiple_of_3():
    sum = 0
    for i in range(100):
        if i % 3 == 0 or i % 5 == 0:
            sum = sum + i
    return sum


def main():
    print('The sum of all multiples of 3 or 5 below 1000 = ' + str(multiple_of_3()))


if __name__ == '__main__':
    main()
