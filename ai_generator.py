import os
from openai import OpenAI
from dotenv import load_dotenv

# Load environment variables
load_dotenv()

# Set OpenAI API key
client = OpenAI(
    api_key = os.environ.get("OPENAI_API_KEY"),
)


def read_c_program(file_path):
    with open(file_path, 'r') as file:
        return file.read()

c_program = read_c_program("CProgram/example_program.c")

def generate_unit_tests(c_program_code):
    prompt = (
        "Generate unit test cases for all functions using the CUnit or Unity framework for the following C program. Output only the unit test code, no explanations or comments.\n\n"
         + "\n\nalso without any code block delimiters and include the line #include \"../CProgram/example_program.c\"  \n\n"
        + c_program_code
    )

    # Send request to OpenAI API
    response = client.chat.completions.create(
    model="gpt-3.5-turbo-0125",
    messages=[
        {"role": "system", "content": "You are a helpful assistant."},
        {
            "role": "user",
            "content": prompt
        }
    ]
)

    return response.choices[0].message.content

generated_tests = generate_unit_tests(c_program)

# Save the generated unit tests
with open("generated_tests/test_example_program.c", "w") as test_file:
    test_file.write(generated_tests)
