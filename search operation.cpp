strut node*search(int data){
    struct node*current=root;
    printf("visiting elements: ");
    while(current->data!=data){
        if(current!=NULL){
            printf("%d",current->data);
            // go to left tree
            if(current->data>data){
                current=current->leftChild;
            }
            //else go to right tree
            else{
                current=current->rightChild;
            }

            //not found
            if(current==NULL){
                returen NULL;
            }
        }
    }
    return current;
    
    }
