#!/usr/bin/python3
"Python"


if __name__ == '__main__':
    import requests
    from sys import argv
    user_payload = {'id': argv[1]}
    todo_payload = {'userId': argv[1]}
    todo_url = 'https://jsonplaceholder.typicode.com/todos'
    user_url = 'https://jsonplaceholder.typicode.com/users'

    user_req = requests.get(user_url, params=user_payload)
    user_json = user_req.json()
    for item in user_json:
        name = item['name']

        completed = 0
        completed_tasks = []
        total = 0
        todo_req = requests.get(todo_url, params=todo_payload)
        todo_json = todo_req.json()
        for item in todo_json:
            total += 1
            if item.get('completed'):
                completed += 1
                completed_tasks.append(item.get('title'))

                print("Employee {} is done with tasks({}/{}):".format
                      (name, completed, total))
                for item in completed_tasks:
                    print("\t" + item)
