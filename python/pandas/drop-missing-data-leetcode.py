import pandas as pd

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
    return students[~students['name'].isnull()]

# https://leetcode.com/problems/drop-missing-data/
