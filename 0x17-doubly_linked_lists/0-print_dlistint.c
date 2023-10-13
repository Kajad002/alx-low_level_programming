def square_matrix_simple(matrix=[]):
  # create a new matrix to store the squared values
  new_matrix = []
  # loop through each row of the matrix
  for row in matrix:
    # create a new list to store the squared values of the row
    new_row = []
    # loop through each element of the row
    for element in row:
      # square the element and append it to the new row
      new_row.append(element ** 2)
    # append the new row to the new matrix
    new_matrix.append(new_row)
  # return the new matrix
  return new_matrix
