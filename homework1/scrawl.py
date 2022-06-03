import requests
from bs4 import BeautifulSoup


url = "https://www.naver.com"
# print(requests.get(url))

response = requests.get(url)
# print(response.text[:500])  #500자까지 출력

# print(response.text)
# print(response.url)
# print(response.encoding)
# print(response.headers)

soup = BeautifulSoup(response.text, 'html.parser')
# print(BeautifulSoup(response.text, 'html.parser'))

# print(soup.title)
# print(soup.title.string)
# print(soup.span)

file = open("naver.html", "w", encoding="UTF-8")
file.write(response.text)
file.close

print(soup.title)
print(soup.title.string)
print(soup.span)
print(soup.finAll('span'))
