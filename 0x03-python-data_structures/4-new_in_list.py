#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    if idx < 0 or idx > len(my_list):
        raise ValuError("Invalid index")
    new_list = list(my_list)
    new_list.insert(idx, element)
    return (new_list)
