#!/usr/bin/python

def day1():
    numbers = []
    with open('input.txt', 'r') as f:
        for line in f:
            numbers.append(int(line))

    greater = 0
    for i in range (1, len(numbers)):
        if numbers[i] > numbers[i - 1]:
            greater += 1

    return greater


def day1_pt2():
    numbers = []
    with open('input.txt', 'r') as f:
        for line in f:
            numbers.append(int(line))

    greater = 0
    for i in range(3, len(numbers) - 2):
        if numbers[i] + numbers[i + 1] + numbers[i + 2] > numbers[i - 1] + numbers[i] + numbers[i + 1]:
            greater += 1
    
    return greater


if __name__ == "__main__":
    print(day1())
    print(day1_pt2())
