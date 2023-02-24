# Searches CSV for popularity of a title taking care of some data collection errors

import re
import csv

# Set counter to 0
counter = 0

# Open the csv
with open("favorites.csv", "r") as file:

    # Read it
    reader = csv.DictReader(file)

    # Iterate over the csv
    for row in reader:
        title = row["title"].strip().upper()
        if re.search("^(OFFICE|THE OFFICE)$", title):
            counter = counter + 1

# Print the result
print(f"Number of people watching The Office is {counter}")