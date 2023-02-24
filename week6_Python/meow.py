def main():
    meow(3)

def meow(n):
    for i in range(n):
        print("meow")

# Making sure main is not called before everything is read
main()