#!/bin/bash
set -e

execute_tests () {
  local original_dir=$(pwd)
  local script_dir=$(dirname "$0")
  cd "${script_dir}/../hours"

  source_file_names=$(ls .)
  for source_file in $source_file_names
  do
    echo "Testing ${source_file}..."
    gcc $source_file -o exec_file
    ./exec_file
    rm exec_file
    echo ''
  done

  cd $original_dir
}

execute_tests
