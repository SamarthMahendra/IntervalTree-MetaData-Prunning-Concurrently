# Concurrent Interval Tree for Metadata Pruning

This project implements a **simple interval tree** to prune file scans using **min/max metadata**, inspired by how data lake engines (Parquet / Hudi / Iceberg) skip files during predicate evaluation.

Each file is indexed as an interval `[min, max]`, and lookups return only the files whose ranges overlap the query key.

---

## Key Features

- Interval-based indexing using file-level min/max metadata  
- Efficient pruning of non-matching files  
- Thread-safe inserts and lookups using `std::mutex`  
- Concurrent writers and readers  
- Demonstrates metadata-based file skipping at scale  

---

## How It Works

- Each tree node stores:
  - `start`, `end` → file’s min/max values
  - `max_value` → maximum `end` value in the subtree
- Insertions place intervals based on `start`
- Lookups traverse only branches that may overlap the search key
- Multiple threads perform concurrent inserts and queries

---

## Example

```text
Files:
[aaa, app] → 2024-01-01/0001.parquet
[baa, cat] → 2024-01-01/0002.parquet
[bob, dad] → 2024-01-01/0003.parquet

Query:
key = "daa"

Result:
2024-01-01/0003.parquet
