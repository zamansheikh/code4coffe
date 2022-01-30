MENU = [
    {'latte': {
        "ingridient":
        {'water': 200,
         'coffe': 10,
         'milk': 50},
        'cost': 2.5}},
    {'americano': {"ingridient":
                   {'water': 180,
                    'coffe': 12,
                    'milk': 60},
                   'cost': 2.6}},
    {'cappuchino': {"ingridient":
                    {'water': 200,
                     'coffe': 15,
                     'milk': 70},
                    'cost': 2.8}},
]
profit = 0
storage = {'milk': 200,
           'water': 600,
           'coffe': 50,
           'money': 00}


def chosen_drinks(choice):
    if choice == 'latte':
        return MENU[0]
    elif choice == 'cappuchino':
        return MENU[1]
    else:
        return MENU[2]


def is_ingridient_sufficient(order_ingridient):
    is_enough = True
    for item in order_ingridient:
        if order_ingridient[item] >= storage[item]:
            print(f'sorry not enough{order_ingridient[item]}')
            is_enough = False
        return is_enough


def calculate_money():
    print('give money')
    coin = int(input('how many penny you will give'))*.01
    coin += int(input('how many quatars you will give')) * .25
    coin += int(input('how many dimes you will give')) * .1
    coin += int(input('how many nickles you will give')) * .05
    return coin


def is_transaction_successful(money_recived, drink_cost):
    global profit
    if money_recived >= drink_cost:
        change = round(money_recived-drink_cost, 2)
        profit += money_recived
        print(f'where is your change{change}')
        return True
    else:
        print('sorry not enough money')
        return False


is_on = True
while is_on:
    choice = input('what you want ,latte,cappuchino,americano?')
    if choice == 'off':
        is_on = False
    elif choice == 'report':
        print(f'milk:{storage["milk"]}')
        print(f'water;{storage["water"]}')
        print(f'coffe:{storage["coffe"]}')
        print(f'money:{profit}')
    else:
        drink = chosen_drinks(choice)
        print(f'your chosen drink is {drink}')
        if is_ingridient_sufficient(drink['ingridient']):
            print('your order is ready')
            money_recived = calculate_money()
            if is_transaction_successful(money_recived, drink['cost']):
                for item in drink['ingridient']:
                    storage[item] -= drink['ingridient'][item]
            else:
                print('sorry not enough money')