#!/bin/bash

find . -name "*.pdf" -exec pdf2svg {} {}.svg \;
