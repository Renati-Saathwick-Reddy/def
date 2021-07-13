class SlowMatrix:

	## The constructor
	# @param matrix A 2d Python list containing data
	def __init__(self, matrix):
		pass

	## Matrix multiplication
	# @param self SlowMatrix1
	# @param mat2 SlowMatrix2
	def __matmul__(self, mat2):
		pass

	## Element wise multiplication
	# @param self SlowMatrix1
	# @param mat2 SlowMatrix2
	def __mul__(self, mat2):
		pass

	## Element wise addition
	# @param self SlowMatrix1
	# @param mat2 SlowMatrix2
	def __add__(self, mat2):
		pass

	## Element wise subtraction
	# @param self SlowMatrix1
	# @param mat2 SlowMatrix2
	def __sub__(self, mat2):
		pass

	## Equality operator
	# @param self SlowMatrix1
	# @param mat2 SlowMatrix2
	def __eq__(self, mat2):
		pass

	## Calculate transpose
	def transpose(self):
		pass

	## Creates a SlowMatrix of 1s
	# @param shape A python pair (row, col)
	def ones(shape):
		pass

	## Creates a SlowMatrix of 0s
	# @param shape A python pair (row, col)
	def zeros(shape):
		pass

	## Returns i,jth element
	# @param key A python pair (i,j)
	def __getitem__(self, key):
		pass

	## Sets i,jth element
	# @param key A python pair (i,j)
	# #param value Value to set
	def __setitem__(self, key, value):
		pass

	## Converts SlowMatrix to a Python string
	def __str__(self):
		pass