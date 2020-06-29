- [STL ALGORITHM](#stl-algorithm)
- [Links](#links)
- [Permutations](#permutations)
  - [Algorithm on Heap](#algorithm-on-heap)
  - [Sorting data](#sorting-data)
  - [Partitioning](#partitioning)
  - [Other permutations](#other-permutations)
  - [Permutation Runes](#permutation-runes)
- [Queries](#queries)
  - [Numeric](#numeric)
  - [Query Property](#query-property)
  - [Query Propery on 2 Ranges](#query-propery-on-2-ranges)
  - [Searching a value](#searching-a-value)
    - [Not Sorted](#not-sorted)
    - [Sorted](#sorted)
  - [Searching a range](#searching-a-range)
  - [Searching a relative value](#searching-a-relative-value)
- [Sets](#sets)
- [Movers](#movers)
- [Value Modifiers](#value-modifiers)
- [Structure Changes](#structure-changes)
- [Basics](#basics)
- [Raw Memory](#raw-memory)
- [Going Further](#going-further)

# STL ALGORITHM

All the C++ STL Algorithms

# Links

- [Youtube Talk](https://www.youtube.com/watch?v=bFSnXNIsK4A)
- [fluentcpp.com/getTheMap](http://www.fluentcpp.com/getTheMap/)


# Permutations 

## Algorithm on Heap

Heap Data-structure (max-heap / min-heap)

- `make_heap`
  - Make heap from an unsorted list
- `push_heap`
  - Push data to a heap (as a range)
- `pop_heap`
  - Pop the first element from the heap
- `sort_heap`
  - Done by repeatedly calling `pop_heap`
  - Also a part of Sorting Data list

## Sorting data

- `sort`
  - Sorting a list
- `partial_sort`
  - Sort the beginning of the list
- `nth_element`
  - Puts data at a particular position if it were in a sorted list
  - Left and right are unsorted
- `inplace_merge`
  - Incremental step in a merge sort
  - Two halves are sorted (we merge them)

## Partitioning

- `partition`
- `partition_point`


## Other permutations

- `rotate`
  - Take an element at the back and put it at the front
- `shuffle`
  - Change the order of a collection randomly
- `next_permutation`
  - next permutation on a collection
- `prev_permutation`
  - previous permutation on a collection
- `reverse`
  - reversing the collection

## Permutation Runes

- `stable_*`
- `is_*`
  - `is_sorted`
  - `is_partition`
  - `is_heap`
  - Returns a boolean
- `is_*_until`
  - `is_sorted_until`
  - Returns an iterator at the start of where the algorithm doesnt hold true

# Queries 

Getting data over collections

## Numeric

- `count`
  - count something in a collection
- `accumulate`
  - sum of the elements of a collection
  - or runs your own custom function
  - `reduce`
  - `transform_reduce`
- `partial_sum`
  - Sums from beginning to a particular point
  - `inclusive_scan`
  - `transform_inclusive_scan`
  - `exclusive_scan`
  - `transform_exclusive_scan`
- `inner_product`
- `adjacent_difference`
- `sample`

## Query Property

- `all_of`
- `any_of`
- `none_of`

## Query Propery on 2 Ranges

- `equal`
  - checks if two collections have same values and are of the same size
  - `is_permutation` 
- `lexicographical_compare`
  - Compare two collections as long as it has a == value
- `mismatch`
  - Stop check in the first place that they differ
  - Returns a `std::pair<iterator, iterator>`
  - Pointing to the respective positions where they start to differ

## Searching a value

### Not Sorted

- `find`
  - Returns the iterator pointing to the value found
  - `end` if the value is not found
- `adjacent_find`
  - Returns the first position where two adjacent values occur
  - Two of the values should occur in a row

### Sorted

- `equal_range`
  - Similar to `adjacent_find`
- `lower_bound`
- `upper_bound`
- `binary_search`
  - Returns a boolean

## Searching a range

- `search`
  - Searches a subrange over a range
- `find_end`
  - Searches a subrange but start searching from the end
- `find_first_of`
  - Find the first occurance of a value in subrange over a range

## Searching a relative value

- `max_element`
  - `iterator`
- `min_element`
  - `iterator`
- `minmax_element`
  - `std::pair<iterator, iterator>`


# Sets

- `set_difference`
  - Returns the difference in SetA (what is not in SetB)
- `set_intersection`
  - Both in SetA and SetB
- `set_union`
  - Union of SetA and SetB
- `set_symmetric_difference`
  - Return the elements that are in (SetA and not in SetB) AND in (SetB and not in SetA)
- `includes`
  - Returns a boolean if SetB is a subset of SetA
- `merge`
  - Takes two sorted collections and puts them into one sorted collection

# Movers

- `copy`
  - Copies every element of first collection to the second collection
- `move`
  - Different from the normal move operation, this is an algorithm
  - Moves element of the first collection to the second collection
- `swap_ranges`
  - Swap the contents of two ranges
- `copy_backward` 
- `move_backward`
  - Similar as `copy` and `move` but does it in the reverse order
  - From `end` to `begin`


# Value Modifiers

Change the values inside a collection

- `fill`
  - Fill the collection with a particular value
- `generate`
  - Runs a particular function for every element of the collection
- `iota`
  - Puts a value at the first element of the collection
  - Increments the value and adds to to each element of the collection
- `replace`
  - Replaces every value with a replacement value

# Structure Changes

- `remove`
  - Remove the values, but keeps the collection length same
  - Does not call any erase operation on the collection
  - Returns an iterator to the first element that has an undefined value (removed)
  - We can then call `collection.erase` to the end of that collection
- `unique`
  - Removes only the adjacent similar numbers
  - Everything else is similar as the `remove` algorithm
- `*_copy`
  - Leaves the collection untouched and do all the operations on the copy of the collection (NOT INPLACE)
  - `remove_copy`
  - `unique_copy`
  - `reverse_copy`
  - `rotate_copy`
  - `replace_copy`
  - `partition_copy`
  - `partion_sort_copy`
- `*_if`
  - > TODO, Understand these
  - `find_if`
  - `find_if_not`
  - `count_if`
  - `remove_if`
  - `remove_copy_if`
  - `replace_if`
  - `replace_copy_if`
  - `copy_if`

# Basics

- `transform`
  - Applies a function to every element of a collection
  - Transform has an overload
  - Takes two collections and runs `f(x, y)` over each element
- `for_each`
  - Calls a function on every element
  - Doesnt care about what f returns

# Raw Memory

- `uninitialized_fill`
- `uninitialized_copy`
- `uninitialized_move`
- `destroy`
  - Destory the above used
- `uninitialized_default_construct`
- `uninitialized_value_construct`
  - > TODO, understand these

- `*_N`
  - Takes the initial position and a **size** argument
  - Performs an operation for a set number of elements
  - `copy_n`
  - `fill_n`
  - `generate_n`
  - `search_n`
  - `for_each_n`
  - `uninitialized_copy_n`
  - `uninitialized_fill_n`
  - `uninitialized_move_n`
  - `uninitialized_default_construct_n`
  - `uninitialized_value_construct_n`
  - `destroy_n`

# Going Further

- Algorithm Complexity
- Pre/Post - requisites
- Look at the implementation

