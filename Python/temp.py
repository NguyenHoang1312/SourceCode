def filter(request):
  part = request.split('name=')
  special_symbol = '<>./()'
  
  new_part = part[0]
  new_part += 'name='
  
  for i in part[1]:
    if i not in special_symbol:
      new_part += i
      
  return new_part
  