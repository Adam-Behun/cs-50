# Algorithms Level 1 - basics

- Algorithm is a specific step-by-step procedure for performing a task
- Input 
- Output
- Complexity
- Flowchart, pseudocode, programming language

# Algorithms Level 2 - examples

There are different types of algorithms used to solve different types of problems.

## Search

There are many different types of search algorithms but the most common include

#### - Linear search
```python
def linear_search(list, target):
	for i in range(len(list)): 
		if list[i] == target: 
			return i 
	return -1
```
`
### - Binary search
``` python
def binary_search(list, target):
	low = 0 
	high = len(list) - 1 
	while low <= high:
		mid = (low + high) // 2 
		if list[mid] == target: 
			return mid 
		elif list[mid] < target: 
			low = mid + 1 
		else: 
			high = mid - 1 
	return -1
```

### - Depth-First search 
``` python
def depth_first_search(root, target): 
	if root is None:
		return False 
	if root.val == target: 
		return True 
	return depth_first_search(root.left, target) or depth_first_search(root.right, target)
```

### - Breadth-First search
``` python
def breadth_first_search(root, target): 
	if root is None: 
		return False 
	
	queue = [root] 
	while queue: 
		curr = queue.pop(0) 
		if curr.val == target: 
			return True 
		if curr.left: 
			queue.append(curr.left) 
		if curr.right: 
			queue.append(curr.right) 
	return False
```

## Sort

### - Bubble sort
```python
def bubble_sort(list): 
	for i in range(len(list) - 1):
		for j in range(len(list) - i - 1): 
			if list[j] > list[j + 1]: 
				list[j], list[j + 1] = list[j + 1], list[j] 
	return list
```

### - Merge sort
```python
def merge_sort(list): 
	if len(list) > 1: 
		mid = len(list) // 2 
		left = list[:mid] 
		right = list[mid:] 
		
		merge_sort(left) 
		merge_sort(right) 
		
		i = j = k = 0 
		while i < len(left) and j < len(right): 
			if left[i] < right[j]: 
				list[k] = left[i] 
				i += 1 
			else: 
				list[k] = right[j] 
				j += 1 
			k += 1 
			
		while i < len(left): 
			list[k] = left[i] 
			i += 1 k += 1 
		
		while j < len(right): 
			list[k] = right[j] 
			j += 1 
			k += 1 

return list
```

### - Selection sort
```python
def selection_sort(list): 
	for i in range(len(list)): 
		min_index = i 
		for j in range(i + 1, len(list)): 
			if list[j] < list[min_index]: 
				min_index = j 
		list[i], list[min_index] = list[min_index], list[i] 
	return list
```

### - Insertion sort
```python
def insertion_sort(list): 
	for i in range(1, len(list)): 
		key = list[i] 
		j = i - 1 
		while j >= 0 and key < list[j]: 
			list[j + 1] = list[j] 
			j -= 1 
		list[j + 1] = key 
	return list
```

### - Quick sort
```python
def quick_sort(list, low, high): 
	if low < high: 
		pivot_index = partition(list, low, high) 
		quick_sort(list, low, pivot_index - 1) 
		quick_sort(list, pivot_index + 1, high)
		 
def partition(list, low, high): 
	pivot = list[high] 
	i = low - 1 
	for j in range(low, high): 
		if list[j] <= pivot: 
			i += 1 
			list[i], list[j] = list[j], list[i] list[i + 1], list[high] = list[high], list[i + 1] 
	return i + 1
```

### - Heap sort
```python
def heap_sort(list):
  n = len(list)
  for i in range(n // 2 - 1, -1, -1):
    heapify(list, n, i)
  for i in range(n - 1, 0, -1):
    list[i], list[0] = list[0], list[i]
    heapify(list, i, 0)

def heapify(list, n, i):
  largest = i
  l = 2 * i + 1
  r = 2 * i + 2

  if l < n and list[i] < list[l]:
    largest = l
  if r < n and list[largest] < list[r]:
    largest = r
  if largest != i:
    list[i], list[largest] = list[largest], list[i]
    heapify(list, n, largest)
```


### Graph
These are algorithms designed to operate on a graph. Graph is a data structure consisting of vertices and edges. Vertices represent problems and edges represent their relationships. Some common graph algorithms:
- Bredth-First search
- Depth-First search
- Dijkstra's algorithm
- Bellman-Ford algorithm
### Dynamic programming
- Breaking down problems into smaller subproblems and keeping their solutions in a table
### Greedy algorithms
- Making a locally optimum choice at each stage without checking its consequences.


# Algorithms level 3 - problems

How to pick the right algorithm to solve a problem
```
- Type of the problem
	- search, sort, optimization
- Input size
	- large or smaller - check out complexity
- Desired output
	- quick solution or 100% accurate
- Available resources 
	- time and memory
```

# Algorithms level 4 - complexity

- Big O - upper bound, worst case scenario 
- Big Omega - lower bound, best case scenario
- Big Theta - upper and lower bound are the same