#!/usr/bin/python3
""" This is a module that reads a text file (UTF8) and prints it to stdout """


def read_file(filename=""):
    """ Reads a text file and close it automatically """
    with open(filename, encoding="utf-8") as f:
        print(f.read(), end="")
