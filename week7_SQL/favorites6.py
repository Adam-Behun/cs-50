# Prints popularity of titles in CSV, sorted by popularity, using lambda function

import csv

# Declare a dictionary
titles = {}

# Open the csv
with open("favorites.csv", "r") as file:

    # Read it
    reader = csv.DictReader(file)

    # Iterate over the csv
    for row in reader:

        # Canoncalize the title
        title = row["title"].strip().upper()

        # Update counter
        if title in titles:
            titles[title] = titles[title] + 1
        else:
            titles[title] = 1

# Print titles in sorted order
for title in sorted(titles, key=lambda title: titles[title], reverse=True):
    print(title, titles[title])