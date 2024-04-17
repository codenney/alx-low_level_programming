#!/usr/bin/python3
""" A module writes a string to a text file """


def write_file(filename="", text=""):
    """ This is a function that writes a string to a text file (UTF8)
        returns the number of characters written
    """
    with open(filename, "w", encoding="utf-8") as f:
        return (f.write(text))
