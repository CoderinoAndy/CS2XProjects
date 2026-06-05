import requests
def check_website(website):
    try:
        response = requests.get(website, timeout=5)
        print(f"URL checked: {url}")
        print(f"Final URL: {response.url}")
        print(f"Final status code: {response.status_code}")
        if response.status_code == 200:
            return (f"{response.status_code}: Website is functional.")
        elif response.status_code == 404:
            return(f"{response.status_code}: Website not found.")
        elif response.status_code == 403:
            return (f"{response.status_code}: Access forbidden.")
        else:
            return (f"{response.status_code}: Website responded with another status")
    except requests.exceptions.Timeout:
        print("Error: timeout")
    except requests.exceptions.ConnectionError:
        print("Error: connection")
    except requests.exceptions.RequestException as error:
        print("Error:", error)

while True:
    print("Type \"&\" to quit")
    website = input("URL: ")
    if website == "&":
        break
    print(check_website(website))