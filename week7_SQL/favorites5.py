# Prints popularity of title in CSV, sorted by popularity

import csv

titles = {}

# Open the file
with open("favorites.csv", "r") as file:

    # Read the file
    reader = csv.DictReader(file)

    # Iterate over the file, add each uppercase title to dictionary
    for row in reader:

        # Canoncalize each title
        title = row["title"].strip().upper()

        # Count the titles
        if title in titles:
            titles[title] += 1
        else:
            titles[title] = 1

# Function to compare the titles by popularity
def get_value(title):
    return titles[title]

# Print titles sorted by popularity
for title in sorted(titles, key=get_value, reverse=True):
    print(title, titles[title])
