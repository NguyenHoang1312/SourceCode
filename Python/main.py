config = {
    'Date': '15:03:22',
    'Time': '09:24:05',
    'Server': 'HaUIJungle',
    'Name': 'Root',
    'Pass': '****'
}

config['Status'] = 'Active'

config.pop('Time')

config['Name'] = 'Sa'

if 'Server' in config:
    print('Yes, Server is:', config['Server'])
else:
    print('No')
    
print(config)