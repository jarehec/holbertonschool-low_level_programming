#  Holberton School - 0x19. C - Hash tables



The focus of this project is to learn:

* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

## Environment
* Ubuntu 14.04 LTS
* GCC Standard C90



## File Descriptions
* 0-hash_table_create
	* creates a hash table
		* Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
		* Returns a pointer to the newly created hash table or NULL on failure
* 1-djb2
	* djb2 hash function
		* Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
* 2-key_index
	* gives you the index of a key
		* Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
		* Returns the index at which the key/value pair should be stored in the array of the hash table
* 3-hash_table_set
	* adds an element to the hash table
		* Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
		* Returns: 1 if it succeeded, 0 otherwise
* 4-hash_table_get
	* retrieves a value associated with a key
		* Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
		* Returns the value associated with the element, or NULL on failure
* 5-hash_table_print
	* prints a hash table
		* Prototype: `void hash_table_print(const hash_table_t *ht);`
		* Example: 
		``` 
		hash_table_set(ht, "Jennie", "and Jay love asm");
    	hash_table_set(ht, "N", "queens");
		```
    Output: `{'Jennie': 'and Jay love asm', 'N': 'queens'}`
* 6-hash_table_delete
	* deletes a hash table
		* Prototype: `void hash_table_delete(hash_table_t *ht);`

## License
Public Domain, no copyright protection
