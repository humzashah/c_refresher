#!/bin/bash
set -e

execute_tests () {
  local original_dir=$(pwd)
  local script_dir=$(dirname "$0")
  cd "${script_dir}/../hours"

  for source_file in $(ls *.c)
  do
    echo "Testing ${source_file}..."
    local exec_file="${source_file}.exe"
    gcc $source_file -o $exec_file
    ./$exec_file
    echo ''
  done

  cd $original_dir
}

execute_tests
