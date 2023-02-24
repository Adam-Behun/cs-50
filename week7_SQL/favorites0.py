# Prints all titles in CSV using csv.reader

import csv

# Open the file
with open("favorites.csv", "r") as file:

    # Create reader
    reader = csv.reader(file)

    # Skip header row
    next(reader)

    # Iterate over the CSV file, printing each title
    for row in reader:
        print(row[1])