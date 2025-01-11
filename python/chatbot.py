from os import environ
from langchain_openai import OpenAI
from dotenv import load_dotenv
 
if not load_dotenv():
   raise RuntimeError('Failed to load .env file')
 
openai_api_key = environ['OPENAI_API_KEY']
 
llm = OpenAI(openai_api_key=openai_api_key)
 
response = llm.invoke('Hello! Explain shortly what is large language model in AI.')
print(response)