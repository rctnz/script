if(game.PlaceId == 2629642516) then
local a = true
--autorejoin
loadstring(game:HttpGet(("https://raw.githubusercontent.com/baechooYT/Just_Stop/main/autorj-forautoexec.lua"), true))()
--antiafk
local VirtualUser = game:GetService("VirtualUser")
game:GetService("Players").LocalPlayer.Idled:connect(function()
   VirtualUser:Button2Down(Vector2.new(0,0),workspace.CurrentCamera.CFrame)
   wait(1)
   VirtualUser:Button2Up(Vector2.new(0,0),workspace.CurrentCamera.CFrame)
end)
while wait() do
if a then
    print("AUTO walkSpeed,claimBoost,OC,buy1hMiningBoost success")
    a = false
    end
game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = 150 
Game:GetService("ReplicatedStorage").Events.ClaimFreeBoostStar:FireServer(false) 
game:GetService("ReplicatedStorage").Events.ActivateOverclock:FireServer(false)
Game:GetService("ReplicatedStorage").Events.BuyBoost:FireServer("1H Mining Boost")
function alg()
print('autoAlg success')
game:GetService("ReplicatedStorage").Events.AlgoChang:FireServer(1)
wait(3)
a = game:GetService("Players").RachataForSell2.Albnn.value
print(a)

wait(1)
game:GetService("ReplicatedStorage").Events.AlgoChang:FireServer(2)
wait(3)
b = game:GetService("Players").RachataForSell2.Albnn.value
print(b)

wait(1)
game:GetService("ReplicatedStorage").Events.AlgoChang:FireServer(3)
wait(3)
c = game:GetService("Players").RachataForSell2.Albnn.value
print(c)

wait(1)
game:GetService("ReplicatedStorage").Events.AlgoChang:FireServer(4)
wait(3)
d = game:GetService("Players").RachataForSell2.Albnn.value
print(d)
wait(2)
if (a>b and a>c and a>d) then 
    game:GetService("ReplicatedStorage").Events.AlgoChang:FireServer(1)
    aa = a
    while wait(1) do
        a = game:GetService("Players").RachataForSell2.Albnn.value
        if (a~=aa) then
            alg()
                 end
             end
        end
     
if (b>a and b>c and b>d)then 
    game:GetService("ReplicatedStorage").Events.AlgoChang:FireServer(2)
     bb = b
    while wait(1) do
        b = game:GetService("Players").RachataForSell2.Albnn.value
        if (b~=bb) then
            alg()
                 end
             end
         end
     
if (c>a and c>b and c>d) then 
    game:GetService("ReplicatedStorage").Events.AlgoChang:FireServer(3)
     cc = c
    while wait(1) do
        c = game:GetService("Players").RachataForSell2.Albnn.value
        if (c~=cc) then
            alg()
                 end
             end
        end
if (d>a and d>b and d>c) then 
    game:GetService("ReplicatedStorage").Events.AlgoChang:FireServer(4)
     dd = d
    while wait(1) do
        d = game:GetService("Players").RachataForSell2.Albnn.value
        if (d~=dd) then
            alg()
                 end
             end
        end

end
local b = true
if b then
    print("b true")
    end
while wait() do
    if b then
       alg()
        b = false
     end
end
end
end
