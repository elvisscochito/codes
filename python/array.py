""" build-in module """
import heapq

grades = [0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100]

print(min(grades), max(grades), sum(grades))

# print the 3 largest values in the array
print(heapq.nlargest(3, grades))

# print the 3 smallest values in the array
print(heapq.nsmallest(3, grades))
