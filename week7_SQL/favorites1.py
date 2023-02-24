# Prints all titles in CSV using csv.DictReader

import csv

# Open the file
with open("favorites.csv", "r") as file:

    # Create DictReader
    reader = csv.DictReader(file)

    # Iterate over CSV file, printing all titles
    for row in reader:
        print(row["title"])