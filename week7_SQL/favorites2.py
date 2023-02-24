# Prints unique values in CSV file, case sensitively

import csv

titles = set()

# Open CSV file
with open("favorites.csv", "r") as file:

    # Create csv.DictReader
    reader = csv.DictReader(file)

    # Iterate over CSV file, adding each title to a set
    for row in reader:
        titles.add(row["title"])

# Print titles in sorted order
for title in sorted(titles):
    print(title)