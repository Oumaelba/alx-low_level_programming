/**
 * str_len - Returns the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
size_t str_len(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @binary: A pointer to a string representing a binary number.
 *
 * Return: The unsigned int value of the binary number
 */
unsigned int binary_to_uint(const char *binary)
{
	char current_char;
	size_t len;
	unsigned int result;

	if (binary == NULL)
		return (0);

	len = str_len(binary);
	result = 0;

	for (size_t i = 0; i < len; i++)
	{
		current_char = binary[i];

		if (current_char == '1')
			result |= (1u << (len - i - 1));
		else if (current_char != '0')
			return (0);
	}
	return (result);
}
