
Node* convertarrtoll(const std::vector<int>& arr) {
    if (arr.empty()) {
        return nullptr; // Handle empty vector case
    }

    Node* head = new Node(arr[0]); // Create head with the first element
    Node* mover = head;

    for (size_t i = 1; i < arr.size(); ++i) {
        Node* temp = new Node(arr[i]); // Create a new node for each element
        mover->bottom = temp;
        mover = mover->bottom;
    }

    return head; // Return the head of the linked list
}

// Flattens a multi-level linked list into a single-level sorted linked list
Node* flatten(Node* head) {
    std::vector<int> arr; 
    Node* temp = head;
    
    // Traverse the main list
    while (temp != nullptr) {
        Node* temp2 = temp;
        
        // Traverse the bottom list
        while (temp2 != nullptr) {
            arr.push_back(temp2->data);
            temp2 = temp2->bottom;
        }
        
        temp = temp->next;
    }

    // Sort the array to ensure the linked list is sorted
    std::sort(arr.begin(), arr.end());
    
    // Convert the sorted array back to a linked list
    return convertarrtoll(arr);
}