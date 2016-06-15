#!/bin/bash
set -e

execute_tests () {
  local original_dir=$(pwd)
  local script_dir=$(dirname "$0")
  cd "${script_dir}/../samples"

  for source_file in $(ls *.c)
  do
    echo "Testing ${source_file}..."
    local exec_file="${source_file%.*}.exe"
    gcc -std=c99 $source_file -o $exec_file
    ./$exec_file
    rm $exec_file
    echo ''
  done

  cd $original_dir
}

time_tests () {
  echo 'Executing tests...'
  echo '.'
  echo '.'

  local start_time=$(date +%s)
  execute_tests
  local end_time=$(date +%s)
  local time_taken=$(expr $end_time - $start_time)
  local green="\e[32m"
  /bin/echo -e "${green}✓ All files ran OK in nearly ${time_taken} second(s)."
}

time_tests
