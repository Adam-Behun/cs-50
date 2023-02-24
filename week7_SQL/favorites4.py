# Prints popularity of titles, sorted by title

import csv

# Declare a dictionary

titles = {}

# Open csv file
with open("favorites.csv", "r") as file:

    # Create a reader
    reader = csv.DictReader(file)

    # Iterate over the csv file, add each uppercase title to the dictionary
    for row in reader:

        # Canoncalize title
        title = row["title"].strip().upper()

        # Count titles
        if title in titles:
            titles[title] = titles[title] + 1
        else:
            titles[title] = 1

# Print titles in sorted order
for title in sorted(titles):
    print(title, titles[title])