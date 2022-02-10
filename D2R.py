from tkinter import *

def convert():
	input_text = text1_field.get("1.0", "end")[:-1]
	length = len(input_text)
	output_text = ''
	for i in range(length):
		current_char = input_text[i]
		previous_char = None
        
		if i > 0:
			previous_char = input_text[i - 1]
		
		if current_char == 'A' or current_char == 'a':
			output_text += 'U'
		
		# change T to A
		elif current_char == 'T' or current_char == 't':
			output_text += 'A'
		
    	# change C to G
		elif current_char == 'C' or current_char == 'c':
			output_text += 'G'
            
        # change G to C
		elif current_char == 'G' or current_char == 'g':
			output_text += 'C'
            
		else:
			output_text += current_char

	text2_field.insert('end -1 chars', output_text)

def clearAll() :
	text1_field.delete(1.0, END)
	text2_field.delete(1.0, END)

if __name__ == "__main__" :
	root = Tk()
	root.geometry("280x300")
	root.resizable(0, 0) #change back to 0, 0 when done
	headlabel = Label(root, text = 'Enter DNA Sequence Below:')
	label1 = Label(root, text = " DNA ",
				fg = 'blue')
	label2 = Label(root, text = "RNA",
				fg = 'red')

	headlabel.grid(row = 0, column = 1)
	label1.grid(row = 1, column = 0)
	label2.grid(row = 4, column = 0)

	root.title("D2R")
	root.iconbitmap("C:/Users/mussi/Downloads/1490886319-24-dna_82481.ico")
	text1_field = Text(root, height = 5, width = 25)
	text2_field = Text(root, height = 5, width = 25)
		
	text1_field.grid(row = 1, column = 1, padx = 10, pady = 10)
	text2_field.grid(row = 4, column = 1, padx = 10, pady = 10)

	button1 = Button(root, text = "Transcibe", command = convert)
	button1.grid(row = 3, column = 1)

	button2 = Button(root, text = "Clear", command = clearAll)
	button2.grid(row = 8, column= 1)

	root.mainloop()