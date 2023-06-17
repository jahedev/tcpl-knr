#!/bin/bash

# Extract the directory path and filename from the provided relative file path
file_path="$1"
directory="."
filename=$(basename "$file_path")
extension="${filename##*.}"
filename="${filename%.*}"

# Set the output directory and compiled file path
output_directory="$directory/build"
compiled_file="$output_directory/$filename.out"

# Check if 'clean' argument is passed
if [ "$1" = "clean" ]; then
    # Delete all .out files in the output directory
    rm -f "$output_directory"/*.out
    exit 0
fi


# Create the output directory if it doesn't exist
mkdir -p "$output_directory"

# Compile the C program using gcc
gcc "$file_path" -o "$compiled_file"

# Run the compiled program from the output directory
cd "$output_directory"
"./$filename.out"
