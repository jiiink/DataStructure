#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-08
#-------------------------------------------------------------------------------

class Emp:
    def __init__(self, emp_name, id):
        self.emp_name = emp_name
        self.id = id

    def __eq__(self, other):

        # Equality Comparison between two objects
        return self.emp_name == other.emp_name and self.id == other.id

    def __hash__(self):

        # hash(custom_object)
        return hash((self.emp_name, self.id))

emp = Emp('Ragav', 12)
print("The hash is: %d" % hash(emp))

# We'll check if two objects with the same
# attribute values have the same hash
emp_copy = Emp('Ragav', 12)
print("The hash is: %d" % hash(emp_copy))