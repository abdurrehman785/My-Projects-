#this code is for analyzing already written articles 
import nltk

nltk.download('punkt_tab')

from textblob import TextBlob 
from newspaper import Article 

url = 'https://www.espncricinfo.com/story/t20-world-cup-2024-pakistan-knocked-out-of-t20-world-cup-2024-in-first-round-1438718' 
article = Article(url) # creating an article variable to store the original article

article.download()
article.parse() # removing all the html 
article.nlp() # preparing the artice for nlp

text = article.summary
#print(text)

blob = TextBlob(text) 
sentiment = blob.sentiment.polarity # gives sentiment from -1 to 1 
print(sentiment)
