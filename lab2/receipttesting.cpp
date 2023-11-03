while (choice != 1 && choice != 2){
	cout << "Press 1 to add an item" << endl;
	cout << "Press 2 to exit program" << endl;
	if (choice == 1){
        	cout << "Please enter the number of the item you want to add to your list." << endl;
                cin >> yourItem;
	}
	else if (choice == 2){
	break; 
	}
	else 
	cout << Invalid input! Try again! << endl;
}

/*
        while (true) {
                cout << "Enter 1 to add an item to your shopping list." << endl;
                cout << "Enter 2 to exit the program." << endl;
                cin >> choice;
                //check for a valid choice
                while (choice != 1 && choice != 2 && choice){
                        cout << "Sorry, that is not a choice you can make! Try again!" << endl;
                        cin >> choice;
                }
                if (choice == 1){
                        cout << "Please enter the number of the item you want to add to your list." << endl;
                        cin >> yourItem;
                }
                if (choice == 2){
                        break;
                }
*/
