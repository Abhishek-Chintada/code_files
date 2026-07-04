import requests

r0 = requests.get("https://xkcd.com/353/")
r1 = requests.get("https://imgs.xkcd.com/comics/python.png")
print(r0)
#print(dir(r))
#print(help(r))
#print(r0.text)
print(r1.ok)
with open("comic.png", "wb") as f:
    f.write(r1.content)
print(r0.headers)
print(r1.headers)