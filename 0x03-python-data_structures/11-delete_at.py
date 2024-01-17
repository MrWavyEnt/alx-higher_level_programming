#!/usr/bin/python3
def delete_at(my_list=[], idx=0):
    my_list_copy = my_list[:]
    if idx < 0 or idx >= len(my_list_copy):
        return (my_list_copy)
    else:
        return (my_list_copy[:idx] + my_list_copy[idx+1:])
