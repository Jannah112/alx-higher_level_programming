#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    sorted_key = sorted(a_dictionary)
    sorted_dict = {key: a_dictionary[key] for key in sorted_key}
    return (sorted_dict)
