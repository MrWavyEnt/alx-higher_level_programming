#!/usr/bin/python3
def update_dictionary(a_dictionary, key, value):
    a_dictionary_copy = a_dictionary.copy()
    a_dictionary_copy[key] = value
   return (a_dictionary_copy)
