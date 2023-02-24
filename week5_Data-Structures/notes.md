# Data structures

Ways to organize data on a computer so it can be accessed and modified efficiently. 

### Common data types

- Arrays
- Linked lists
- Stacks
- Queues
- Trees
- Hash tables
- Graphs
- Tries
- Heaps
- Sets

There are many data structures. The task is to decide which data structure to use based on the specific requirements of how we want the application to work. Different data structures organize data in different ways and were created for different purposes. I can even define my own data structure. 

### Operations done on data

- Searching
- Sorting
- Inserting
- Deleting
- Updating
- Aggregating
- Filtering
- Mapping
- Grouping
- Joining
- Pivoting

## Which data structure to use:
- Is there a specific data structure to use with my problem?

#### - Some angles to think about when choosing a data structure

	- Access patterns
		- how oftern do we use the data
	- Space complexity
		- how much memory we need
	- Time complexity
		- how much time are the operations taking
	- Memory locality
		- where is the data stored
	- Operations expected on the data
		- what operations we want to perform on the data

Different problems require different data and different algorithms to solve the problems. Based on how we want to use the data, we decide which structure to use.

#### - Some problems and their appropriate data structure

1.  Storing and searching for a large number of strings: Trie (prefix tree) - Tries are well-suited for storing and searching for strings, as each node in the trie represents a single character in the strings. They have an average-case time complexity of O(m) for searching, where m is the length of the string being searched for.
    
2.  Implementing a stack: Stack - A stack is a linear data structure that follows the last-in, first-out (LIFO) principle. It allows the insertion and deletion of elements only at the top of the stack, and has an average-case time complexity of O(1) for these operations.
    
3.  Implementing a queue: Queue - A queue is a linear data structure that follows the first-in, first-out (FIFO) principle. It allows the insertion of elements at the back of the queue and the deletion of elements at the front of the queue, and has an average-case time complexity of O(1) for these operations.
    
4.  Storing and searching for a large number of integers: Hash table - Hash tables are efficient for storing and searching for elements, with an average-case time complexity of O(1). They use a hash function to map keys (in this case, the integers) to indices in an array, making the search process fast.
    
5.  Storing and searching for a large number of records: Binary search tree - A binary search tree is a tree-like data structure that stores a set of records, where each node has a key and one or more associated values. It is well-suited for searching for specific records, as the tree is organized in a way that allows for fast searching. The average-case time complexity for searching in a binary search tree is O(log n), where n is the number of nodes in the tree.

6.  Storing and sorting a large number of elements: Heap - A heap is a tree-like data structure that has a specific ordering of its elements. It is well-suited for sorting elements, as the root element is always the minimum (in a min-heap) or maximum (in a max-heap) element in the heap. Heaps have an average-case time complexity of O(log n) for inserting and deleting elements, and an O(n log n) time complexity for building the heap from an unsorted array.
    
7.  Implementing a set: Set - A set is a collection of elements that does not allow duplicate values and does not have a specific order. It is well-suited for tasks such as membership testing (checking if an element is in the set) and set operations (such as union, intersection, and difference). Sets can be implemented using a variety of data structures, such as hash tables, trees, or bit arrays.
    
8.  Storing and searching for a large number of key-value pairs: Hash table - Hash tables are efficient for storing and searching for key-value pairs, with an average-case time complexity of O(1). They use a hash function to map keys to indices in an array, making the search process fast.
    
9.  Storing and searching for a large number of records with multiple attributes: Multi-key hash table - A multi-key hash table is a hash table that uses multiple keys (attributes) to map elements to indices in an array. It is well-suited for storing and searching for records with multiple attributes, as it allows you to search for elements using any combination of attributes.
