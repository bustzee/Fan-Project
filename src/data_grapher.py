import pandas as pd
import matplotlib.pyplot as plt


df = pd.read_csv("data.csv");
df["Motor_State"] = df["Motor_State"].map({
    "OFF" : 0,
    "ON" : 1
})
#Mapping our off and on values to be 0 and 1 respectively
plt.figure(figsize=(10,6));

plt.scatter(
    df["Temperature_C"],
    df["Motor_State"],
    alpha=0.5,
    s=20
)
#Making our scatterplots
plt.yticks([0,1], ["OFF", "ON"])
#Showing ON vs OFF on the graph based on the binary value
plt.xlabel("Temperature (°C)")
plt.ylabel("Motor State")
plt.title("DC Fan Motor State vs Temperature")
plt.axvline(x=30, linestyle="--", label = "Threshhold")
#Showing our fan on temperature threshold
plt.grid(True)
plt.legend()
plt.tight_layout()
plt.show()