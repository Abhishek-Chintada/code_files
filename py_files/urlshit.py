import requests

# getting info.

payload = { "username":"Labbe", "password":"Lavdesh" } # makes the shit less errorprone
r = requests.get("https://httpbin.org/get", params = payload, timeout=3)
print(r.url)
print(r.text)

# posting info.
# using the payload as data here.
r0 = requests.post("https://httpbin.org/post", data = payload, timeout=3)
print(r0.url)
print(r0.text)
r0_dict = r0.json()
print(r0_dict["form"]["password"])

# authentication
r1 = requests.get("https://httpbin.org/basic-auth/Labbe/Lavdesh", auth=("Labbe", "Lavdesh"), timeout=3)
if(r1.ok) :
    print(r1.text)
else :
    print(r1)