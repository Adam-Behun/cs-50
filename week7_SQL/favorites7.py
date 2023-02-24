# Searches CSV for popularity of a title


import csv

# Prompt user for a title
title = input("Title: ").strip().upper()

# Open the csv
with open("favorites.csv", "r") as file:

    # Read it
    reader = csv.DictReader(file)

    # Set counter to 0
    counter = 0

    # Iterate over the csv
    for row in reader:
        if row["title"].strip().upper() == title:
            counter = counter + 1

# Print the result
print(counter)