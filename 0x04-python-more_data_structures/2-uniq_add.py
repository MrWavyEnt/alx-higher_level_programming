#!/usr/python3
def uniq_add(my_list):
   unique_set = set()
   for item in my_list:
       unique_set.add(item)
   result = sum(unique_set)
   return result

print(uniq_add([])) # Call the function with an empty list
