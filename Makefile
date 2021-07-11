all: word

word: main.cpp login.hpp login.cpp menu.hpp menu.cpp moneymanager.hpp moneymanager.cpp stockstatus.cpp stockstatus.hpp userdetails.hpp userdetails.cpp
	g++ main.cpp login.cpp menu.cpp moneymanager.cpp stockstatus.cpp userdetails.cpp -o make
	
clean:
	rm -f make
